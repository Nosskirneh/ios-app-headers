//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTTrackCreditsArtistModel : NSObject
{
    NSString *_name;
    NSURL *_uri;
    NSURL *_externalUrl;
}

@property(readonly, nonatomic) NSURL *externalUrl; // @synthesize externalUrl=_externalUrl;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

