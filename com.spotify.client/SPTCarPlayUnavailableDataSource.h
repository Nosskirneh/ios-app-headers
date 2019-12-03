//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarPlayDataSource-Protocol.h"

@class MPContentItem, NSString;

@interface SPTCarPlayUnavailableDataSource : NSObject <SPTCarPlayDataSource>
{
    MPContentItem *_tabMenuItem;
    MPContentItem *_loginPromptItem;
    NSString *_title;
    NSString *_tabMenuItemTitle;
    id _debugLog;
}

@property(retain, nonatomic) id debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) NSString *tabMenuItemTitle; // @synthesize tabMenuItemTitle=_tabMenuItemTitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)contentItemAtIndexPath:(id)arg1;
- (long long)numberOfChildItemsAtIndexPath:(id)arg1;
- (_Bool)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1;
- (void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateOfflineOnly:(_Bool)arg1;
@property(readonly, nonatomic) MPContentItem *loginPromptItem; // @synthesize loginPromptItem=_loginPromptItem;
@property(readonly, nonatomic) MPContentItem *tabMenuItem; // @synthesize tabMenuItem=_tabMenuItem;
- (id)initWithTitle:(id)arg1 menuItemTitle:(id)arg2 debugLog:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

