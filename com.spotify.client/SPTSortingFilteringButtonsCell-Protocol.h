//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStyleable-Protocol.h"

@class UIView;
@protocol SPTSortingFilteringButtonsCellStyle, SPTSortingFilteringButtonsContainer;

@protocol SPTSortingFilteringButtonsCell <GLUEStyleable>
@property(readonly, nonatomic) UIView<SPTSortingFilteringButtonsContainer> *buttonsContainer;
- (void)glue_applyStyle:(id <SPTSortingFilteringButtonsCellStyle>)arg1;
@end

