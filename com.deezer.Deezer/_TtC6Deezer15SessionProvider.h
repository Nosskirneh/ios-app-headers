//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DZServerInformation, JSONTokens, _TtC6Deezer7Session;

@interface _TtC6Deezer15SessionProvider : NSObject
{
    // Error parsing type: , name: serverInformation
    // Error parsing type: , name: _currentSession
    // Error parsing type: , name: _tokens
    // Error parsing type: , name: dataProvider
}

+ (id)defaultSessionProvider;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)authenticateToDeezerAPIWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDataProvider:(id)arg1;
@property(nonatomic, retain) JSONTokens *tokens;
@property(nonatomic, retain) _TtC6Deezer7Session *currentSession;
@property(nonatomic, retain) DZServerInformation *serverInformation; // @synthesize serverInformation;

@end

