//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRIllustrable-Protocol.h"

@class NSArray, NSString;
@protocol DZRDynamicPageAction, DZRDynamicPageSectionLayout;

@protocol DZRDynamicPageSection <DZRIllustrable>
- (_Bool)hasMoreItems;
- (_Bool)hasSeparator;
- (NSString *)groupID;
- (NSArray *)items;
- (id <DZRDynamicPageAction>)actionOfKind:(NSString *)arg1;
- (NSArray *)availableActions;
- (id <DZRDynamicPageSectionLayout>)sectionLayout;
- (id)additionalInfoForKey:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;
@end
