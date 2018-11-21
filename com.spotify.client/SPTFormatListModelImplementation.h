//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFormatListModel-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface SPTFormatListModelImplementation : NSObject <SPTFormatListModel>
{
    _Bool _isFollowed;
    NSDictionary *_formatListAttributes;
    NSString *_name;
    NSString *_freeformDescription;
    NSURL *_URL;
    NSURL *_imageURL;
    NSString *_ownerName;
    NSString *_madeForName;
    double _totalDuration;
    NSDate *_lastModifiedTime;
    NSArray *_items;
    NSNumber *_followerCount;
}

@property(retain, nonatomic) NSNumber *followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(copy, nonatomic) NSString *madeForName; // @synthesize madeForName=_madeForName;
@property(copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *freeformDescription; // @synthesize freeformDescription=_freeformDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *formatListAttributes; // @synthesize formatListAttributes=_formatListAttributes;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

