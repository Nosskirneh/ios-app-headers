//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTFreeTierCollectionSectionViewModel <NSObject>
@property(readonly, nonatomic) _Bool sectionHasAction;
@property(readonly, nonatomic, getter=isSectionSeparatorShowing) _Bool sectionSeparatorShowing;
@property(readonly, nonatomic, getter=isSectionHeaderShowing) _Bool sectionHeaderShowing;
@property(readonly, nonatomic) NSString *title;
- (void)performAction;
@end

