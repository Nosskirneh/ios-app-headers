//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTActionSheetControllerDelegate-Protocol.h"
#import "YTReachabilityObserver-Protocol.h"

@class GIMMe, NSArray, NSHashTable, NSOrderedSet, NSString, YTActionSheetController, YTIPlayerConfig, YTReachabilityController;
@protocol YTVideoQualitySwitchDelegate;

@interface YTVideoQualitySwitchController : NSObject <YTActionSheetControllerDelegate, YTReachabilityObserver>
{
    YTReachabilityController *_reachabilityController;
    NSOrderedSet *_selectableQualityLabels;
    YTActionSheetController *_actionSheetController;
    NSHashTable *_observers;
    NSArray *_sortedSelectableFormats;
    YTIPlayerConfig *_playerConfig;
    NSString *_currentFormatQualityLabel;
    NSString *_lastSelectedQualityLabel;
    _Bool _allowAudioOnlyManualQualitySelection;
    _Bool _qualitySwitchAvailable;
    _Bool _qualitySwitchEnabled;
    GIMMe *_gimme;
    id <YTVideoQualitySwitchDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isQualitySwitchEnabled) _Bool qualitySwitchEnabled; // @synthesize qualitySwitchEnabled=_qualitySwitchEnabled;
@property(readonly, nonatomic, getter=isQualitySwitchAvailable) _Bool qualitySwitchAvailable; // @synthesize qualitySwitchAvailable=_qualitySwitchAvailable;
@property(nonatomic) __weak id <YTVideoQualitySwitchDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowAudioOnlyManualQualitySelection; // @synthesize allowAudioOnlyManualQualitySelection=_allowAudioOnlyManualQualitySelection;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)videoQualityUpperLimitLabel;
- (id)selectableQualityLabels;
- (id)actionWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 selected:(_Bool)arg3 forLabel:(id)arg4;
- (void)setCurrentlySelectedFormat:(id)arg1;
- (_Bool)canSelectFormat:(id)arg1;
- (id)autoVideoQualityButtonSubtitle;
- (id)autoVideoQualityButtonTitle;
- (void)updateAvailabilityState;
- (void)setSelectedQualityLabel:(id)arg1;
- (id)createActionSheetController;
- (_Bool)shouldDisplayActionSheet;
- (void)reachabilityDidChange;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (id)selectedVideoQualityLabelText;
- (void)setPlayerConfig:(id)arg1;
- (void)removeUIObserver:(id)arg1;
- (void)addUIObserver:(id)arg1;
- (void)showMenuFromView:(id)arg1;
- (void)reset;
- (void)setUserSelectableFormats:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

