//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTBrowseCeramicInstrumentationModel : NSObject
{
    NSString *_feature;
    NSString *_page;
    NSURL *_entityURI;
}

@property(readonly, copy, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
@property(readonly, copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

