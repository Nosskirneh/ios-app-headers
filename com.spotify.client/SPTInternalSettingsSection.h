//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray;

@interface SPTInternalSettingsSection : SettingsSection
{
    NSArray *_cellsAndActions;
}

+ (id)internalFeaturesViewControllerWithSettingsRegistry:(id)arg1 bannerPresentationManager:(id)arg2 navigationRouter:(id)arg3 linkDispatcher:(id)arg4;
@property(readonly, nonatomic) NSArray *cellsAndActions; // @synthesize cellsAndActions=_cellsAndActions;
- (void).cxx_destruct;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)subViewCellWithTitle:(id)arg1;
- (id)debugCellSpecification:(id)arg1;
- (id)featureCellSpecificationWithSettingsViewController:(id)arg1 settingsRegistry:(id)arg2 bannerPresentationManager:(id)arg3 navigationRouter:(id)arg4 linkDispatcher:(id)arg5;
- (id)initWithSettingsViewController:(id)arg1 settingsRegistry:(id)arg2 bannerPresentationManager:(id)arg3 debugUIPresenter:(id)arg4 navigationRouter:(id)arg5 linkDispatcher:(id)arg6;

@end

