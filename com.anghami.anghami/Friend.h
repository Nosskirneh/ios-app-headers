//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface Friend : NSObject <NSCoding, NSCopying>
{
    _Bool _isFollower;
    _Bool _isSelected;
    NSString *_facebookID;
    NSString *_anghamiId;
    NSString *_name;
    NSString *_anghamiImage;
}

+ (id)uniqueArrayOfFriends:(id)arg1;
+ (id)myself;
@property _Bool isSelected; // @synthesize isSelected=_isSelected;
@property _Bool isFollower; // @synthesize isFollower=_isFollower;
@property(copy) NSString *anghamiImage; // @synthesize anghamiImage=_anghamiImage;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *anghamiId; // @synthesize anghamiId=_anghamiId;
@property(copy) NSString *facebookID; // @synthesize facebookID=_facebookID;
- (void).cxx_destruct;
- (id)convertToUser;
@property(readonly) NSURL *profileURL;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFriend:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTBXMLElement:(struct _TBXMLElement *)arg1;

@end

