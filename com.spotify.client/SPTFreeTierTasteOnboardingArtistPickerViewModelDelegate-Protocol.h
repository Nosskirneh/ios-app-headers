//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTFreeTierTasteOnboardingArtistPickerViewModel;

@protocol SPTFreeTierTasteOnboardingArtistPickerViewModelDelegate <NSObject>
- (void)artistPickerViewModelWillLoadItems:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1 isFreshData:(_Bool)arg2;
- (void)artistPickerViewModel:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1 isOffline:(_Bool)arg2;
- (void)artistPickerViewModelDidCancel:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1;
- (void)artistPickerViewModel:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1 didSelectRequiredNumberOfItems:(_Bool)arg2;
- (void)artistPickerViewModelDidChangeSelectedItems:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1;
- (void)artistPickerViewModelDidLoadItems:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1;
@end

