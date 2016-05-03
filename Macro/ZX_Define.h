

#define APP_DELEGATE  ((AppDelegate *)[[UIApplication sharedApplication]delegate])

#define WINDOW_HEIGHT ([[(AppDelegate *)[[UIApplication sharedApplication]delegate] window] height] + (IOS7_OR_LATER ? 0 : -20))
#define WINDOW_WIDTH  [UIScreen mainScreen].bounds.size.width

/**
 *  common functions
 */

#if DEBUG
#define NSLog(__FORMAT__, ...) NSLog((@"%s ----->%d\n " __FORMAT__), __PRETTY_FUNCTION__, __LINE__, ## __VA_ARGS__)
#else
#define NSLog(__FORMAT__, ...)
#endif


//#define IMAGE_WITH_NAME(name) [UIImage imageWithContentsOfFile :[[NSBundle mainBundle] pathForAuxiliaryExecutable:name]]


#define RELEASE_SAFELY(__POINTER) { [__POINTER release]; __POINTER = nil; }

/**
 *  color define
 */
#define RANDOM_COLOR     [UIColor colorWithRed:(float)random() / (float)RAND_MAX green:(float)random() / (float)RAND_MAX blue:(float)random() / (float)RAND_MAX alpha:1]

#define HEX_COLOR(hexValue)       [UIColor colorWithRed : ((float)((hexValue & 0xFF0000) >> 16)) / 255.0 green : ((float)((hexValue & 0xFF00) >> 8)) / 255.0 blue : ((float)(hexValue & 0xFF)) / 255.0 alpha : 1.0]

#define NINE_COLOR       HEX_COLOR(0x999999)

#define SIX_COLOR        HEX_COLOR(0x666666)

#define THREE_COLOR      HEX_COLOR(0x333333)

#define UITableViewStyleGroupedBackgroundColor  (IOS8_OR_LATER ? [UIColor colorWithRed:0.937255 green:0.937255 blue:0.956863 alpha:1.000] : [UIColor colorWithRed:0.933 green:0.933 blue:0.957 alpha:1.000])

/**
 *  device
 */
#define IPAD             (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

#define IPHONE5          !([[UIScreen mainScreen] bounds].size.height - 568)

#define IPHONE4          !([[UIScreen mainScreen] bounds].size.height - 480)

#define SIMULATOR        (NSNotFound != [[[UIDevice currentDevice] model] rangeOfString:@"Simulator"].location)

/**
 *  valid
 */

#ifndef ZX_EMPTY
#define ZX_EMPTY(__OBJECT)                       ((nil == __OBJECT) ? YES : ((nil != __OBJECT && [__OBJECT respondsToSelector : @selector(count)]) ? ([__OBJECT performSelector : @selector(count)] <= 0) : ((nil != __OBJECT && [__OBJECT respondsToSelector:@selector(length)]) ? ([__OBJECT performSelector : @selector(length)] <= 0) : NO)))
#endif

#ifndef ZX_NOTEMPTY
#define ZX_NOTEMPTY(__OBJECT)                    (ZX_EMPTY(__OBJECT) == NO)
#endif

#ifndef ZX_VALID
#define ZX_VALID(__OBJECT, __CLASSNAME)          (nil != __OBJECT && [__OBJECT isKindOfClass:[__CLASSNAME class]])
#endif

#ifndef ZX_VALID_EMPTY
#define ZX_VALID_EMPTY(__OBJECT, __CLASSNAME)    (ZX_VALID(__OBJECT, __CLASSNAME) == YES && ZX_EMPTY(__OBJECT) == YES)
#endif

#ifndef ZX_VALID_NOTEMPTY
#define ZX_VALID_NOTEMPTY(__OBJECT, __CLASSNAME) (ZX_VALID(__OBJECT, __CLASSNAME) == YES && ZX_EMPTY(__OBJECT) == NO)
#endif

/**
 *  degrees/radian functions
 */
#define degreesToRadian(x)                       (M_PI * (x) / 180.0)
#define radianToDegrees(radian)                  (radian * 180.0) / (M_PI)

/**
 *  random number
 */
#define randomIntBetween(a, b)                   (MIN(a, b) + arc4random() % (ABS((b) - (a)) + 1))


#define randomFloatBetween(a, b)                 (((double)arc4random() / 0x100000000) * ABS((b) - (a)) + MIN(a, b))


#define Userdefaults         [NSUserDefaults standardUserDefaults]
#define NotificationCenter   [NSNotificationCenter defaultCenter]
#define UUID_STRING          [[UIDevice currentDevice] identifierForVendor].UUIDString

// System Information

#define APP_VERSION          [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define APP_VERSION_SHORT    [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define APP_NAME             [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleDisplayName"]

#define IOS_VERSION          [[[UIDevice currentDevice] systemVersion] floatValue]
#define CurrentSystemVersion ([[UIDevice currentDevice] systemVersion])
#define CurrentLanguage      ([[NSLocale preferredLanguages] objectAtIndex:0])


#define IS_RETINA            ([[UIScreen mainScreen] respondsToSelector:@selector(displayLinkWithTarget:selector:)] && ([UIScreen mainScreen].scale == 2.0))

#define IOS6_OR_BEFORE       ([[[UIDevice currentDevice] systemVersion] floatValue] < 7.0)
#define IOS7_OR_LATER        ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define IOS8_OR_LATER        ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

// UI
#define FLEXIBLE_BAR_ITEM    [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil]

// category property
#define ZX_CATEGORY_PROPERTY(property, setProperty, propertyClass, objc_AssociationPolicy, lazyInit) \
    static char property ## Key; \
    - (void)setProperty:(propertyClass *)property \
    { \
        objc_setAssociatedObject(self, &property ## Key, property, objc_AssociationPolicy); \
    } \
    - (propertyClass *)property \
    { \
        propertyClass *property = (propertyClass *)objc_getAssociatedObject(self, &property ## Key); \
        if (!property) { \
            lazyInit; \
            if (property) self.property = property; \
        } \
        return property; \
    } \

