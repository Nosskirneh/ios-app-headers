//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RHSocialDisconnectResponse : NSObject
{
    NSString *_guid;
    NSString *_rhapsodyAccessToken;
}

+ (id)parseJSON:(id)arg1;
@property(copy, nonatomic) NSString *rhapsodyAccessToken; // @synthesize rhapsodyAccessToken=_rhapsodyAccessToken;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;

@end
