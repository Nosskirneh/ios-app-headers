//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RHFindFriendsViewModel, RHMetricsController, RHProfileMO;
@protocol RHProfileNavigationService, _TtP7Napster17ImageProviderOBJC_;

@interface RHFindFriendsCellViewModel : NSObject
{
    _Bool _isCurrentUserFollowing;
    _Bool _followButtonHidden;
    RHProfileMO *_profile;
    unsigned long long _contentType;
    RHFindFriendsViewModel *_parentViewModel;
    RHProfileMO *_currentUserProfile;
    NSString *_screenName;
    id <_TtP7Napster17ImageProviderOBJC_> _imageProvider;
    id <RHProfileNavigationService> _navigationService;
    RHMetricsController *_metricsController;
}

@property(readonly, nonatomic) RHMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(readonly, nonatomic) id <RHProfileNavigationService> navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, nonatomic) id <_TtP7Napster17ImageProviderOBJC_> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(readonly, nonatomic) RHProfileMO *currentUserProfile; // @synthesize currentUserProfile=_currentUserProfile;
@property(nonatomic) __weak RHFindFriendsViewModel *parentViewModel; // @synthesize parentViewModel=_parentViewModel;
@property(readonly, nonatomic) _Bool followButtonHidden; // @synthesize followButtonHidden=_followButtonHidden;
@property(nonatomic) _Bool isCurrentUserFollowing; // @synthesize isCurrentUserFollowing=_isCurrentUserFollowing;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) RHProfileMO *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)didSelect;
- (id)deferredFollowUnfollow;
- (id)avatarImageWithSize:(struct CGSize)arg1;
- (void)configureKVO;
- (id)initWithProfile:(id)arg1 parentViewModel:(id)arg2 contentType:(unsigned long long)arg3;

@end
