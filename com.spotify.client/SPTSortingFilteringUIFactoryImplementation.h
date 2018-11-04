//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSortingFilteringUIFactory.h"

@class NSString, SPTSortingFilteringGLUETheme;

@interface SPTSortingFilteringUIFactoryImplementation : NSObject <SPTSortingFilteringUIFactory>
{
    SPTSortingFilteringGLUETheme *_theme;
}

@property(readonly, nonatomic) SPTSortingFilteringGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)createSortingFilteringPickerWithAvailableFilterRules:(id)arg1 availableSortRules:(id)arg2 selectedFilterRules:(id)arg3 selectedSortRule:(id)arg4;
- (id)createFilterBarWithPlaceholder:(id)arg1;
- (id)createSearchFieldWithFrame:(struct CGRect)arg1;
- (id)sortingFilteringTheme;
- (id)initWithSortingFilteringTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
