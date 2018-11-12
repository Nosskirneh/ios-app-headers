//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol SPTFreeTierCollectionSongsHeaderViewModelActionDelegate, SPTFreeTierCollectionSongsHeaderViewModelDelegate;

@protocol SPTFreeTierCollectionSongsHeaderViewModel <NSObject>
@property(readonly, nonatomic, getter=isFilterAndSortingHidden) _Bool filterAndSortingHidden;
@property(readonly, nonatomic, getter=isPlayButtonHidden) _Bool playButtonHidden;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *playButtonTitle;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsHeaderViewModelActionDelegate> actionDelegate;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsHeaderViewModelDelegate> delegate;
- (void)presentSortingFilterPickerInTargetViewController:(UIViewController *)arg1;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)play;
@end

