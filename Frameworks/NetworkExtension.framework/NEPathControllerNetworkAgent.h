/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPathControllerNetworkAgent : NENetworkAgent {
    NWInterface * _advisoryInterface;
    id /* block */  _internalAssertHandler;
    id /* block */  _internalUnassertHandler;
    NWInterface * _predictedInterface;
    bool  _weakAdvisory;
}

@property (retain) NWInterface *advisoryInterface;
@property (copy) id /* block */ internalAssertHandler;
@property (copy) id /* block */ internalUnassertHandler;
@property (retain) NWInterface *predictedInterface;
@property bool weakAdvisory;

+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)advisoryInterface;
- (bool)assertAgentWithOptions:(id)arg1;
- (id)copyAgentData;
- (id /* block */)internalAssertHandler;
- (id /* block */)internalUnassertHandler;
- (id)predictedInterface;
- (void)setAdvisoryInterface:(id)arg1;
- (void)setAssertHandler:(id /* block */)arg1;
- (void)setInternalAssertHandler:(id /* block */)arg1;
- (void)setInternalUnassertHandler:(id /* block */)arg1;
- (void)setPredictedInterface:(id)arg1;
- (void)setUnassertHandler:(id /* block */)arg1;
- (void)setWeakAdvisory:(bool)arg1;
- (void)unassertAgentWithOptions:(id)arg1;
- (bool)weakAdvisory;

@end
