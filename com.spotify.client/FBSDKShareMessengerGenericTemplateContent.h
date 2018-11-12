//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSDKSharingContent-Protocol.h"

@class FBSDKHashtag, FBSDKShareMessengerGenericTemplateElement, NSArray, NSString, NSURL;

@interface FBSDKShareMessengerGenericTemplateContent : NSObject <FBSDKSharingContent>
{
    _Bool _isSharable;
    NSURL *_contentURL;
    FBSDKHashtag *_hashtag;
    NSArray *_peopleIDs;
    NSString *_placeID;
    NSString *_ref;
    NSString *_pageID;
    NSString *_shareUUID;
    unsigned long long _imageAspectRatio;
    FBSDKShareMessengerGenericTemplateElement *_element;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) FBSDKShareMessengerGenericTemplateElement *element; // @synthesize element=_element;
@property(nonatomic) unsigned long long imageAspectRatio; // @synthesize imageAspectRatio=_imageAspectRatio;
@property(nonatomic) _Bool isSharable; // @synthesize isSharable=_isSharable;
@property(readonly, copy, nonatomic) NSString *shareUUID; // @synthesize shareUUID=_shareUUID;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) FBSDKHashtag *hashtag; // @synthesize hashtag=_hashtag;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

