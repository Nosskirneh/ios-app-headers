//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSectionControllerProtocol-Protocol.h"

@class NSArray, NSMutableSet, NSSet, NSString;
@protocol YTSectionControllerDelegate, YTSurveySectionControllerDelegate;

@interface YTSurveySectionController : NSObject <YTSectionControllerProtocol>
{
    _Bool _skippable;
    _Bool _submittable;
    NSMutableSet *_selectedIndexes;
    _Bool _submitOnSelect;
    id <YTSectionControllerDelegate> _sectionControllerDelegate;
    NSArray *_options;
    id <YTSurveySectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTSurveySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSSet *selectedIndexes; // @synthesize selectedIndexes=_selectedIndexes;
@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
@property(nonatomic) _Bool submitOnSelect; // @synthesize submitOnSelect=_submitOnSelect;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate=_sectionControllerDelegate;
- (void).cxx_destruct;
- (void)refreshSubmitSkipButtonWithSubmittable:(_Bool)arg1 skippable:(_Bool)arg2;
- (void)resetCellSelection;
- (id)implementationForBehavior:(id)arg1;
- (void)deselectItemAtIndex:(unsigned long long)arg1;
- (void)selectItemAtIndex:(unsigned long long)arg1;
- (void)didDeselectItemAtIndex:(long long)arg1 fromView:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1 fromView:(id)arg2;
- (id)cellClassesToRegister;
- (Class)cellClassForItemAtIndex:(long long)arg1;
- (void)updateCell:(id)arg1 forIndex:(long long)arg2;
- (_Bool)canLoadMore;
- (long long)numberOfItems;
- (void)didReloadData;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (id)model;
- (void)setSkippable:(_Bool)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

