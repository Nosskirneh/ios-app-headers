//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTContextMenuTaskAction.h"

#import "SPTContextMenuAction.h"

@class NSString;

@interface SPTCustomContextAction : SPTContextMenuTaskAction <SPTContextMenuAction>
{
    CDUnknownBlockType _actionBlock;
    long long _actionIcon;
    NSString *_actionTitle;
}

@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) long long actionIcon; // @synthesize actionIcon=_actionIcon;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (id)performAction;
- (long long)icon;
- (id)title;
- (id)initWithIcon:(long long)arg1 actionTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
