//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;
@protocol GoogleCastPlayQueueConnectionDelegate;

@protocol GoogleCastPlayQueueConnecting
@property(nonatomic) __weak id <GoogleCastPlayQueueConnectionDelegate> delegate;
- (void)requestQueueStatus;
- (void)updateQueueWithCustomData:(NSDictionary *)arg1;
- (void)loadWithContentID:(NSString *)arg1 customData:(NSDictionary *)arg2 playPosition:(double)arg3 autoplay:(_Bool)arg4;
@end

