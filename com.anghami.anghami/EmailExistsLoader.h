//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSString;

@interface EmailExistsLoader : Loader
{
    _Bool _exists;
    NSString *_email;
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;

@end

