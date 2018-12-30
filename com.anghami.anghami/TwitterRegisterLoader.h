//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSString;

@interface TwitterRegisterLoader : Loader
{
    NSString *_twitterUsername;
}

@property(retain, nonatomic) NSString *twitterUsername; // @synthesize twitterUsername=_twitterUsername;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (id)initWithDelegate:(id)arg1 twitterUsername:(id)arg2;
- (int)type;

@end

