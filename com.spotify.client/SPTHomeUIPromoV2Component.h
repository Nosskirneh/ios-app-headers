//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponent-Protocol.h"
#import "SPTHomePromoV2ComponentViewDelegate-Protocol.h"

@class NSSet, NSString, SPTHomeUILogger;
@protocol GLUETheme, SPTHomeUIPromoV2Player;

@interface SPTHomeUIPromoV2Component : NSObject <SPTHomePromoV2ComponentViewDelegate, HUBComponent>
{
    id <GLUETheme> _theme;
    id <SPTHomeUIPromoV2Player> _player;
    SPTHomeUILogger *_logger;
}

@property(readonly, nonatomic) SPTHomeUILogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTHomeUIPromoV2Player> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)logPlayerAction:(unsigned long long)arg1 withModel:(id)arg2;
- (void)didTapPlayInComponentView:(id)arg1 withModel:(id)arg2;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 player:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
