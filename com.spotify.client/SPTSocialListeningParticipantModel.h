//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningParticipantModelEntity-Protocol.h"

@class NSString, NSURL;

@interface SPTSocialListeningParticipantModel : NSObject <SPTSocialListeningParticipantModelEntity>
{
    _Bool _host;
    _Bool _currentUser;
    NSURL *_imageURL;
    NSString *_participantID;
    NSString *_username;
    NSString *_name;
    NSURL *_largeImageURL;
}

@property(readonly, nonatomic) NSURL *largeImageURL; // @synthesize largeImageURL=_largeImageURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic, getter=isCurrentUser) _Bool currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic, getter=isHost) _Bool host; // @synthesize host=_host;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToParticipantModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 currentUserData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

