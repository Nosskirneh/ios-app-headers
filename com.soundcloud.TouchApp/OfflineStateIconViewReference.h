//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OfflineStateIconPresenter, UIView;

@interface OfflineStateIconViewReference : NSObject
{
    OfflineStateIconPresenter *_presenter;
}

@property(retain, nonatomic) OfflineStateIconPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *view;
- (void)deactivate;
- (void)updateWithUrn:(id)arg1;
- (void)updateForLikes;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

