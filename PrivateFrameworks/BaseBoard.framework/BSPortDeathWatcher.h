/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BSDispatchSource, BSMachSendRight, NSObject<OS_dispatch_queue>;

@interface BSPortDeathWatcher : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSObject<OS_dispatch_queue> *_queue;
    BSMachSendRight *_sendRight;
    BSDispatchSource *_source;
}

@property(copy,readonly) BSMachSendRight * sendRight;

- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(id)arg3;
- (id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(id)arg3;
- (void)invalidate;
- (void)queue_handlePortDeathEvent;
- (id)sendRight;

@end