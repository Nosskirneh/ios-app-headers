//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCollectionSectionViewModel.h"

@class NSString;

@interface SPTFreeTierCollectionSectionViewModelImplementation : NSObject <SPTFreeTierCollectionSectionViewModel>
{
    _Bool _sectionHeaderShowing;
    _Bool _sectionSeparatorShowing;
    _Bool _sectionHasAction;
    NSString *_title;
    CDUnknownBlockType _performBlock;
}

+ (id)actionSectionWithTitle:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
+ (id)sectionWithTitle:(id)arg1;
+ (id)separatorSection;
+ (id)hiddenSection;
@property(copy, nonatomic) CDUnknownBlockType performBlock; // @synthesize performBlock=_performBlock;
@property(nonatomic) _Bool sectionHasAction; // @synthesize sectionHasAction=_sectionHasAction;
@property(nonatomic, getter=isSectionSeparatorShowing) _Bool sectionSeparatorShowing; // @synthesize sectionSeparatorShowing=_sectionSeparatorShowing;
@property(nonatomic, getter=isSectionHeaderShowing) _Bool sectionHeaderShowing; // @synthesize sectionHeaderShowing=_sectionHeaderShowing;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)performAction;
- (id)initWithTitle:(id)arg1 headerShowing:(_Bool)arg2 separatorShowing:(_Bool)arg3 hasAction:(_Bool)arg4 performBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

