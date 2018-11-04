//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLanguageOnboardingDataControllerDelegate.h"

@class NSString, SPTLanguageOnboardingDataController;

@interface SPTLanguageOnboardingSettingsViewModel : NSObject <SPTLanguageOnboardingDataControllerDelegate>
{
    _Bool _loading;
    _Bool _selectedRequiredNumberOfLanguages;
    id <SPTLanguageOnboardingSettingsViewModelDelegate> _delegate;
    SPTLanguageOnboardingDataController *_dataController;
}

@property(retain, nonatomic) SPTLanguageOnboardingDataController *dataController; // @synthesize dataController=_dataController;
@property(readonly, nonatomic, getter=hasSelectedRequiredNumberOfLanguages) _Bool selectedRequiredNumberOfLanguages; // @synthesize selectedRequiredNumberOfLanguages=_selectedRequiredNumberOfLanguages;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <SPTLanguageOnboardingSettingsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataController:(id)arg1 didReachRequiredSelectedNumberOfLanguages:(_Bool)arg2;
- (void)dataController:(id)arg1 isOffline:(_Bool)arg2;
- (void)dataController:(id)arg1 didStartLoading:(_Bool)arg2;
- (void)dataController:(id)arg1 didDeselectLanguageAtIndex:(unsigned long long)arg2;
- (void)dataController:(id)arg1 didSelectLanguageAtIndex:(unsigned long long)arg2;
- (void)dataController:(id)arg1 didFailToUpdateSelectedLanguages:(id)arg2;
- (void)dataControllerDidUpdateSelectedLanguages:(id)arg1;
- (void)dataController:(id)arg1 didFailFetchingLanguages:(id)arg2;
- (void)dataControllerDidFetchLanguages:(id)arg1;
- (void)toggleLanguageSelectionAtIndex:(unsigned long long)arg1;
- (_Bool)isLanguageSelectedAtIndex:(unsigned long long)arg1;
- (id)imageURLForIndex:(unsigned long long)arg1;
- (id)languageNameForIndex:(unsigned long long)arg1;
- (long long)numberOfAvailableLanguages;
- (void)updateSelectedLanguages;
- (void)fetchLanguages;
@property(readonly, nonatomic) NSString *sectionHeaderTitle;
@property(readonly, nonatomic) NSString *navBarTitle;
- (void)setSelectedRequiredNumberOfLanguages:(_Bool)arg1;
@property(readonly, nonatomic, getter=hasFetchedLanguages) _Bool fetchedLanguages;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
- (id)initWithDataLoader:(id)arg1 connectivityController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

