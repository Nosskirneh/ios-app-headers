//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMVastNodeBaseParser.h"

@class IMAvidVerification;

@interface IMAvidVerificationParser : IMVastNodeBaseParser
{
    _Bool _isVerification;
    _Bool _isJavascriptResource;
    IMAvidVerification *_avidVerification;
}

+ (id)parserElementName;
@property(nonatomic) _Bool isJavascriptResource; // @synthesize isJavascriptResource=_isJavascriptResource;
@property(nonatomic) _Bool isVerification; // @synthesize isVerification=_isVerification;
@property(retain, nonatomic) IMAvidVerification *avidVerification; // @synthesize avidVerification=_avidVerification;
- (void).cxx_destruct;
- (void)foundCDATA:(id)arg1;
- (_Bool)endParsingForElement:(id)arg1;
- (id)createParserForElement:(id)arg1 attributes:(id)arg2;

@end

