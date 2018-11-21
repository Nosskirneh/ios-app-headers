//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionSongsHeaderViewModel-Protocol.h"

@class NSString;
@protocol SPTFreeTierCollectionSongsHeaderViewModelActionDelegate, SPTFreeTierCollectionSongsHeaderViewModelDelegate;

@interface SPTFreeTierCollectionSongsHeaderViewModelImplementation : NSObject <SPTFreeTierCollectionSongsHeaderViewModel>
{
    _Bool _playButtonHidden;
    _Bool _filterAndSortingHidden;
    id <SPTFreeTierCollectionSongsHeaderViewModelDelegate> delegate;
    id <SPTFreeTierCollectionSongsHeaderViewModelActionDelegate> actionDelegate;
    NSString *_textFilter;
}

@property(nonatomic, getter=isFilterAndSortingHidden) _Bool filterAndSortingHidden; // @synthesize filterAndSortingHidden=_filterAndSortingHidden;
@property(nonatomic, getter=isPlayButtonHidden) _Bool playButtonHidden; // @synthesize playButtonHidden=_playButtonHidden;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsHeaderViewModelActionDelegate> actionDelegate; // @synthesize actionDelegate;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsHeaderViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)presentSortingFilterPickerInTargetViewController:(id)arg1;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)play;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *playButtonTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

