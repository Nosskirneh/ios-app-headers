//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDAudioService;

@protocol IDAudioServiceDelegate <NSObject>
- (void)audioService:(IDAudioService *)arg1 multimediaButtonEvent:(int)arg2;
- (void)audioService:(IDAudioService *)arg1 interruptStateChanged:(int)arg2;
- (void)audioService:(IDAudioService *)arg1 entertainmentStateChanged:(int)arg2;
@end
