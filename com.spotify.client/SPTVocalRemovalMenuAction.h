//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuAction-Protocol.h"

@class NSString;

@interface SPTVocalRemovalMenuAction : NSObject <SPTContextMenuAction>
{
    _Bool _isDisabled;
    long long _icon;
    NSString *_title;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)performAction;
- (id)initWithAction:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

