//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRCarModeBannerActing-Protocol.h"

@class DZRCarModeBannerView, DZRCarModeButton, NSString, UIBarButtonItem;

@interface DZRCarModeManager : NSObject <DZRCarModeBannerActing>
{
    DZRCarModeBannerView *_bannerView;
    DZRCarModeButton *_myMusicButton;
    UIBarButtonItem *_carModeButtonItem;
    id _labObserver;
    NSString *_carModeBannerFirstAppearanceKey;
    NSString *_carModeDisclaimerFirstAppearanceKey;
}

@property(retain) NSString *carModeDisclaimerFirstAppearanceKey; // @synthesize carModeDisclaimerFirstAppearanceKey=_carModeDisclaimerFirstAppearanceKey;
@property(retain) NSString *carModeBannerFirstAppearanceKey; // @synthesize carModeBannerFirstAppearanceKey=_carModeBannerFirstAppearanceKey;
@property(retain, nonatomic) id labObserver; // @synthesize labObserver=_labObserver;
@property(retain, nonatomic) UIBarButtonItem *carModeButtonItem; // @synthesize carModeButtonItem=_carModeButtonItem;
@property(retain, nonatomic) DZRCarModeButton *myMusicButton; // @synthesize myMusicButton=_myMusicButton;
@property(retain, nonatomic) DZRCarModeBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (id)contextStringWithContext:(long long)arg1;
- (void)showDisclaimerIfNeededOnViewController:(id)arg1;
- (_Bool)isCarModeDisclaimerFirstTimeSeen;
- (void)setCarModeDisclaimerFirstTimeSeenInPreferences;
- (_Bool)isCarModeBannerFirstTimeSeen;
- (void)setCarModeBannerFirstTimeSeenInPreferences;
- (void)goToCarMode;
- (void)setActivated:(_Bool)arg1 fromContext:(long long)arg2;
- (void)setActivated:(_Bool)arg1;
- (_Bool)isActivated;
- (void)updateCarModeButtons;
- (void)discoverButtonTouched:(id)arg1;
- (void)didTapCarModeButton:(id)arg1;
- (void)dismissButtonTouched:(id)arg1;
- (void)showCarModeBannerView:(id)arg1 fromContext:(long long)arg2 withOriginalHeight:(double)arg3;
- (void)launchCarModeIfAvailableFromContext:(long long)arg1;
- (_Bool)isCarModeVisible;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

