//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EXP_HUBComponentEvent, EXP_SPTHubPlayTrackListCommandHandler, SPTPlayerContext;
@protocol EXP_HUBCommandModel;

@protocol EXP_SPTHubPlayTrackListCommandHandlerDelegate <NSObject>
- (SPTPlayerContext *)playTrackListHandler:(EXP_SPTHubPlayTrackListCommandHandler *)arg1 providePlayerContextForCommand:(id <EXP_HUBCommandModel>)arg2 event:(EXP_HUBComponentEvent *)arg3;
@end

