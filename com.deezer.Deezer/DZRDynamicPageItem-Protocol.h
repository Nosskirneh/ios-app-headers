//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRIllustrable-Protocol.h"

@class NSArray, NSString;
@protocol DZRDynamicPageAction;

@protocol DZRDynamicPageItem <DZRIllustrable>
- (NSString *)accessibilityLabel;
- (id <DZRDynamicPageAction>)actionOfKind:(NSString *)arg1;
- (NSArray *)availableActions;
- (id)additionalInfoForKey:(NSString *)arg1;
- (long long)cellAccessoryType;
- (_Bool)isAvailable;
- (NSString *)caption;
- (NSString *)subtitle;
- (NSString *)title;
- (NSArray *)pictures;
- (id)playableObject;
@end

