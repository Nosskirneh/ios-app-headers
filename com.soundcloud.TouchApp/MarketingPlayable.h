//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, Urn;

@interface MarketingPlayable : NSObject
{
    Urn *_urn;
    NSString *_title;
    Urn *_creatorUrn;
    NSString *_creatorName;
}

@property(readonly, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property(readonly, nonatomic) Urn *creatorUrn; // @synthesize creatorUrn=_creatorUrn;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) Urn *urn; // @synthesize urn=_urn;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToPlayable:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUrn:(id)arg1 title:(id)arg2 creatorUrn:(id)arg3 creatorName:(id)arg4;

@end

