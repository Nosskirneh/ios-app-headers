//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UserInfo;

@interface AboutUserSectionsConfiguration : NSObject
{
    UserInfo *_userInfo;
}

@property(readonly, nonatomic) UserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)emptyStateFooter;
- (_Bool)hasSocialMediaLinks;
- (_Bool)hasBiography;
- (_Bool)shouldShowEmptyStateFooter;
- (id)userBioSection;
- (id)userSocialMediaLinkSection;
- (id)userRelationshipsSection;
- (id)userRelationshipsSectionWithEmptyStateFooter;
@property(readonly, nonatomic) NSArray *visibleSections;
- (id)initWithUserInfo:(id)arg1;

@end

