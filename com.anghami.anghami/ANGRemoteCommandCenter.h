//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

@interface ANGRemoteCommandCenter : NSObject
{
    NSMutableArray *handlers;
    NSDate *_lastShuffleDate;
    id _shuffleCommand;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id shuffleCommand; // @synthesize shuffleCommand=_shuffleCommand;
@property(retain, nonatomic) NSDate *lastShuffleDate; // @synthesize lastShuffleDate=_lastShuffleDate;
- (void).cxx_destruct;
- (void)updateShuffleButton;
- (void)addShuffleAction;
- (void)removeShuffleAction;
- (_Bool)repeatAllowed;
- (_Bool)scrubbingAllowed;
- (_Bool)previousAllowed;
- (void)updateCommandAvailability:(id)arg1;
- (void)pauseCommand;
- (void)playCommand;
- (void)updateRepeatButton;
- (void)updateActionButtons;
- (void)initRemoteCommands;
- (void)dealloc;
- (id)init;

@end

