//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface UATagGroupsMutation : NSObject
{
    NSDictionary *_addTagGroups;
    NSDictionary *_removeTagGroups;
    NSDictionary *_setTagGroups;
}

+ (id)prepareTagGroup:(id)arg1;
+ (id)normalizeTagGroup:(id)arg1;
+ (id)collapseMutations:(id)arg1;
+ (id)mutationWithAddTags:(id)arg1 removeTags:(id)arg2;
+ (id)mutationToSetTags:(id)arg1 group:(id)arg2;
+ (id)mutationToRemoveTags:(id)arg1 group:(id)arg2;
+ (id)mutationToAddTags:(id)arg1 group:(id)arg2;
@property(retain, nonatomic) NSDictionary *setTagGroups; // @synthesize setTagGroups=_setTagGroups;
@property(retain, nonatomic) NSDictionary *removeTagGroups; // @synthesize removeTagGroups=_removeTagGroups;
@property(retain, nonatomic) NSDictionary *addTagGroups; // @synthesize addTagGroups=_addTagGroups;
- (void).cxx_destruct;
- (id)payload;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

