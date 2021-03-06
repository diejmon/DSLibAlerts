
@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@class DSAlert;
@class DSReachability;
@class DSAlertsQueue;

@interface DSAlertsHandler: NSObject
@property (nonatomic, weak, nullable) DSReachability *reachability;
@property (nonatomic, strong, nullable) NSArray *filterOutMessages;

@property (class, readonly, strong) DSAlertsHandler *sharedInstance NS_SWIFT_NAME(shared);

- (void)showAlert:(nullable DSAlert *)theAlert modally:(BOOL)isModalAlert;

- (DSAlertsQueue *)detachAlertsQueue;

@end

NS_ASSUME_NONNULL_END
