#import <Foundation/Foundation.h>
#import <ReactABI19_0_0/ABI19_0_0RCTBridgeModule.h>

extern NSString * const ABI19_0_0RNBranchLinkOpenedNotification;
extern NSString * const ABI19_0_0RNBranchLinkOpenedNotificationErrorKey;
extern NSString * const ABI19_0_0RNBranchLinkOpenedNotificationParamsKey;
extern NSString * const ABI19_0_0RNBranchLinkOpenedNotificationUriKey;
extern NSString * const ABI19_0_0RNBranchLinkOpenedNotificationBranchUniversalObjectKey;
extern NSString * const ABI19_0_0RNBranchLinkOpenedNotificationLinkPropertiesKey;

@interface ABI19_0_0RNBranch : NSObject <ABI19_0_0RCTBridgeModule>

+ (void)initSessionWithLaunchOptions:(NSDictionary *)launchOptions isReferrable:(BOOL)isReferrable;
+ (BOOL)handleDeepLink:(NSURL *)url;
+ (BOOL)continueUserActivity:(NSUserActivity *)userActivity;
+ (void)useTestInstance;

@end
