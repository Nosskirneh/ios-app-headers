//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHRESTRequest.h"

@class NSMutableDictionary, NSString;

@interface RHMutableRESTRequest : RHRESTRequest
{
    NSString *_authenticationHeader;
    NSString *_authenticationToken;
    NSMutableDictionary *_jsonData;
}

@property(retain, nonatomic) NSMutableDictionary *jsonData; // @synthesize jsonData=_jsonData;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSString *authenticationHeader; // @synthesize authenticationHeader=_authenticationHeader;
- (void).cxx_destruct;
- (id)initWithUrlParts:(id)arg1 authToken:(id)arg2 andJson:(id)arg3;
- (id)initWithUrlParts:(id)arg1 authToken:(id)arg2;
- (_Bool)shouldReportRejectForHttpStatusCode:(long long)arg1;
- (id)credentials;
- (id)authentication;
- (id)httpFields;
- (id)jsonPayload;

@end

