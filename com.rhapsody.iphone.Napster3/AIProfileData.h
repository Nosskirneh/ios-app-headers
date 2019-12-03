//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIToken.h"

@class NSDate, NSDictionary;

@interface AIProfileData : AIToken
{
    NSDate *expirationDate;
    NSDate *localTimeStamp;
    NSDictionary *profileData;
}

@property(retain) NSDictionary *profileData; // @synthesize profileData;
- (void)setLocalTimeStamp:(id)arg1;
- (id)localTimeStamp;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate;
- (void).cxx_destruct;
- (id)getValue;
- (int)getKey;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isValid;
- (id)initWithProfileData:(id)arg1;

@end
