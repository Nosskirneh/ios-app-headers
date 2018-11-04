//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaEducationTooltipActionDelegate.h"
#import "SPTGaiaEducationTooltipsPresenter.h"

@class NSString, SPTTheme;

@interface SPTGaiaEducationTooltipsPresenterImplementation : NSObject <SPTGaiaEducationTooltipActionDelegate, SPTGaiaEducationTooltipsPresenter>
{
    id <SPTFreeTierEducationTooltipPresenter> _tooltipPresenter;
    id <SPTGaiaManager> _gaiaManager;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
@property(readonly, nonatomic) id <SPTFreeTierEducationTooltipPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
- (void).cxx_destruct;
- (id)actionLabelForContext:(long long)arg1;
- (id)messageForContext:(long long)arg1;
- (id)tooltipIdentifierForContext:(long long)arg1;
- (void)educationTooltipContentViewDidPressActionButton:(id)arg1;
- (void)hideTooltipForPage:(long long)arg1;
- (void)presentTooltipForPage:(long long)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3;
- (id)initWithTooltipPresenter:(id)arg1 gaiaManager:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

