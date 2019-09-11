//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTUser : NSObject
{
    struct scoped_connection _user_data_connection;
    _Bool _loaded;
    NSString *_username;
    NSString *_displayableName;
    NSString *_displayableShortName;
    NSURL *_link;
    NSURL *_profilePictureURL;
    NSURL *_profilePictureThumbnailURL;
}

@property(readonly, nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) NSURL *profilePictureThumbnailURL; // @synthesize profilePictureThumbnailURL=_profilePictureThumbnailURL;
@property(readonly, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(readonly, nonatomic) NSURL *link; // @synthesize link=_link;
@property(readonly, nonatomic) NSString *displayableShortName; // @synthesize displayableShortName=_displayableShortName;
@property(readonly, nonatomic) NSString *displayableName; // @synthesize displayableName=_displayableName;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)updateWithDataFrom:(id)arg1;
- (id)initWithUserData:(const shared_ptr_464e3128 *)arg1 scheduler:(id)arg2;

@end

