//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDAdSession;

@interface GADOMIDAdEvents : NSObject
{
    GADOMIDAdSession *_adSession;
}

- (void).cxx_destruct;
- (void)startSessionIfNeeded;
- (_Bool)impressionOccurredWithError:(id *)arg1;
- (id)initWithAdSession:(id)arg1 error:(id *)arg2;

@end
