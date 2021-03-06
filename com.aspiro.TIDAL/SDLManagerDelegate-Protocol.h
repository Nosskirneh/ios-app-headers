//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SDLLifecycleConfigurationUpdate;

@protocol SDLManagerDelegate <NSObject>
- (void)hmiLevel:(NSString *)arg1 didChangeToLevel:(NSString *)arg2;
- (void)managerDidDisconnect;

@optional
- (SDLLifecycleConfigurationUpdate *)managerShouldUpdateLifecycleToLanguage:(NSString *)arg1;
- (void)systemContext:(NSString *)arg1 didChangeToContext:(NSString *)arg2;
- (void)audioStreamingState:(NSString *)arg1 didChangeToState:(NSString *)arg2;
@end

