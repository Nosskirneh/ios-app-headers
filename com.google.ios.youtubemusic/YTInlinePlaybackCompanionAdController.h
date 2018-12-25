//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTResponder-Protocol.h"

@class GIMMe, NSString, UIView, YTICommand, YTIMenuRenderer;
@protocol YTResponder;

@interface YTInlinePlaybackCompanionAdController : NSObject <YTResponder>
{
    id _entry;
    YTIMenuRenderer *_menuRenderer;
    YTICommand *_navigationEndpoint;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    UIView *_view;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)selectItem:(id)arg1;
- (void)showMenu:(id)arg1;
- (id)loadAppPromoCompanionAdRenderer:(id)arg1;
- (id)loadCompanionAdRenderer:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

