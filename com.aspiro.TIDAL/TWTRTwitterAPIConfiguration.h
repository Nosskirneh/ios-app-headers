//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TWTRTwitterAPIConfiguration : NSObject
{
    unsigned long long _DMTextCharacterLimit;
    unsigned long long _charactersReservedPerMedia;
    unsigned long long _maxMediaPerUpload;
    NSArray *_nonUsernamePaths;
    unsigned long long _photoSizeLimit;
    NSArray *_photoSizes;
    unsigned long long _shortURLLength;
    unsigned long long _shortURLLengthHTTPS;
}

@property(readonly, nonatomic) unsigned long long shortURLLengthHTTPS; // @synthesize shortURLLengthHTTPS=_shortURLLengthHTTPS;
@property(readonly, nonatomic) unsigned long long shortURLLength; // @synthesize shortURLLength=_shortURLLength;
@property(readonly, copy, nonatomic) NSArray *photoSizes; // @synthesize photoSizes=_photoSizes;
@property(readonly, nonatomic) unsigned long long photoSizeLimit; // @synthesize photoSizeLimit=_photoSizeLimit;
@property(readonly, copy, nonatomic) NSArray *nonUsernamePaths; // @synthesize nonUsernamePaths=_nonUsernamePaths;
@property(readonly, nonatomic) unsigned long long maxMediaPerUpload; // @synthesize maxMediaPerUpload=_maxMediaPerUpload;
@property(readonly, nonatomic) unsigned long long charactersReservedPerMedia; // @synthesize charactersReservedPerMedia=_charactersReservedPerMedia;
@property(readonly, nonatomic) unsigned long long DMTextCharacterLimit; // @synthesize DMTextCharacterLimit=_DMTextCharacterLimit;
- (void).cxx_destruct;
- (void)setPropertiesFromDict:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end
