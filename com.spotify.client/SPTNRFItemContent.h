//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface SPTNRFItemContent : NSObject
{
    NSURL *_URI;
    NSString *_name;
    NSString *_ownerName;
    NSURL *_imageURL;
    NSDate *_timestamp;
}

@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 timestamp:(id)arg2;

@end

