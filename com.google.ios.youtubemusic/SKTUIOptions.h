//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTFullScreenViewControllerOptions.h"

#import "SKTTopSuggestionsViewControllerOptions-Protocol.h"

@class NSArray, NSNumber, NSString, QTMColorGroup, SKTClientConfig, SKTExperimentOptions, SKTLocalizedStringOverrides, SKTUIAlertDialogOptions, SKTUIGridContactDisplayOptions, SKTUIInAppContactDisplayOptions, UIActivityViewController, UIView, UIViewController;
@protocol SKTClientSharingDisplayOptions, SKTContactListColorOverrides;

@interface SKTUIOptions : SKTFullScreenViewControllerOptions <SKTTopSuggestionsViewControllerOptions>
{
    _Bool showHeaderOnMinimizedView;
    unsigned long long initialSuggestionsLayout;
    unsigned long long initialSuggestionCount;
    unsigned long long initialSuggestionGridRows;
    SKTUIGridContactDisplayOptions *gridContactDisplayOptions;
    id <SKTContactListColorOverrides> topSuggestionsColorOverrides;
    UIViewController<SKTClientSharingDisplayOptions> *_clientSharingOptionsViewController;
    UIActivityViewController *_activityViewController;
    unsigned long long _fullScreenCancelAction;
    unsigned long long _bottomSheetStyle;
}

@property(nonatomic) unsigned long long bottomSheetStyle; // @synthesize bottomSheetStyle=_bottomSheetStyle;
@property(nonatomic) unsigned long long fullScreenCancelAction; // @synthesize fullScreenCancelAction=_fullScreenCancelAction;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) UIViewController<SKTClientSharingDisplayOptions> *clientSharingOptionsViewController; // @synthesize clientSharingOptionsViewController=_clientSharingOptionsViewController;
@property(nonatomic) _Bool showHeaderOnMinimizedView; // @synthesize showHeaderOnMinimizedView;
@property(retain, nonatomic) id <SKTContactListColorOverrides> topSuggestionsColorOverrides; // @synthesize topSuggestionsColorOverrides;
@property(retain, nonatomic) SKTUIGridContactDisplayOptions *gridContactDisplayOptions; // @synthesize gridContactDisplayOptions;
@property(nonatomic) unsigned long long initialSuggestionGridRows; // @synthesize initialSuggestionGridRows;
@property(nonatomic) unsigned long long initialSuggestionCount; // @synthesize initialSuggestionCount;
@property(nonatomic) unsigned long long initialSuggestionsLayout; // @synthesize initialSuggestionsLayout;
- (void).cxx_destruct;
- (id)initWithThemeColorGroup:(id)arg1 inAppContactDisplayOptions:(id)arg2 clientId:(int)arg3;
- (id)initWithThemeColorGroup:(id)arg1 clientId:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SKTClientConfig *clientConfig;
@property(readonly, nonatomic) int clientId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int entryPoint;
@property(retain, nonatomic) SKTExperimentOptions *experimentOptions;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SKTUIInAppContactDisplayOptions *inAppContactDisplayOptions;
@property(retain, nonatomic) NSArray *initiallySelectedTargets;
@property(nonatomic) __weak UIView *loggingParent;
@property(nonatomic) unsigned long long permissionsBehaviors;
@property(retain, nonatomic) SKTUIAlertDialogOptions *permissionsPreRequestOptions;
@property(nonatomic) unsigned long long selectionMode;
@property(retain, nonatomic) SKTUIAlertDialogOptions *settingsRedirectDialogOptions;
@property(retain, nonatomic) NSArray *sharedWithTargetGroups;
@property(retain, nonatomic) SKTLocalizedStringOverrides *stringOverrides;
@property(retain, nonatomic) NSNumber *submissionID;
@property(readonly) Class superclass;
@property(retain, nonatomic) QTMColorGroup *themeColorGroup;
@property(nonatomic) _Bool useGoogleMaterialTheme;
@property(nonatomic) _Bool validateContacts;

@end

