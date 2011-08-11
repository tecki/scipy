#ifndef CEPHES_DOC_H
#define CEPHES_DOC_H
#define airy_doc "(Ai,Aip,Bi,Bip)=airy(z) calculates the Airy functions and their derivatives\nevaluated at real or complex number z.  The Airy functions Ai and Bi \nare two independent solutions of y''(x)=xy.  Aip and Bip are the first derivatives\nevaluated at x of Ai and Bi respectively."
#define airye_doc "(Aie,Aipe,Bie,Bipe)=airye(z) calculates the exponentially scaled Airy functions and \ntheir derivatives evaluated at real or complex number z.  \nairye(z)[0:1] = airy(z)[0:1] * exp(2.0/3.0*z*sqrt(z))\nairye(z)[2:3] = airy(z)[2:3] * exp(-abs((2.0/3.0*z*sqrt(z)).real))"
#define bdtr_doc "y=bdtr(k,n,p) returns the sum of the terms 0 through k of the\nBinomial probability density:  sum(nCj p**j (1-p)**(n-j),j=0..k)"
#define bdtrc_doc "y=bdtrc(k,n,p) returns the sum of the terms k+1 through n of the\nBinomial probability density: sum(nCj p**j (1-p)**(n-j), j=k+1..n)"
#define bdtri_doc "p=bdtri(k,n,y) finds the probability p such that the sum of the\nterms 0 through k of the Binomial probability density is equal to the\ngiven cumulative probability y."
#define bei_doc "y=bei(x) returns the Kelvin function bei x"
#define beip_doc "y=beip(x) returns the derivative of the Kelvin function bei x"
#define ber_doc "y=ber(x) returns the Kelvin function ber x"
#define berp_doc "y=berp(x) returns the derivative of the Kelvin function ber x"
#define besselpoly_doc "y=besselpoly(a,lam,nu) returns the value of the integral:\nintegral(x**lam * jv(nu,2*a*x),x=0..1)."
#define beta_doc "y=beta(a,b) returns gamma(a) * gamma(b) / gamma(a+b)"
#define betainc_doc "y=betainc(a,b,x) returns the incomplete beta integral of the\n" \
                "arguments, evaluated from zero to x: \n\n" \
                "gamma(a+b) / (gamma(a)*gamma(b)) * integral(t**(a-1) (1-t)**(b-1), t=0..x).\n" \
                "\n" \
                "Note\n" \
                "----\n" \
                "The incomplete beta is also sometimes defined without the terms\n" \
                "in gamma, in which case the above definition is the so-called regularized\n" \
                "incomplete beta. Under this definition, you can get the incomplete beta by\n" \
                "multiplying the result of the scipy function by beta(a, b)."
#define betaincinv_doc "x=betaincinv(a,b,y) returns x such that betainc(a,b,x) = y."
#define betaln_doc "y=betaln(a,b) returns the natural logarithm of the absolute value of\nbeta: ln(|beta(x)|)."
#define btdtr_doc "y=btdtr(a,b,x) returns the area from zero to x under the beta\ndensity function: gamma(a+b)/(gamma(a)*gamma(b)))*integral(t**(a-1)\n(1-t)**(b-1), t=0..x).  SEE ALSO betainc"
#define btdtri_doc "x=btdtri(a,b,p) returns the pth quantile of the beta distribution.  It is\neffectively the inverse of btdtr returning the value of x for which \nbtdtr(a,b,x) = p.   SEE ALSO betaincinv"
#define cbrt_doc "y=cbrt(x) returns the real cube root of x."
#define chdtr_doc "p=chdtr(v,x) Returns the area under the left hand tail (from 0 to x) of the Chi\nsquare probability density function with v degrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=0..x)"
#define chdtrc_doc "p=chdtrc(v,x) returns the area under the right hand tail (from x to\ninfinity) of the Chi square probability density function with v\ndegrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=x..inf)"
#define chdtri_doc "x=chdtri(v,p) returns the argument x such that chdtrc(v,x) is equal\nto p."
#define cosdg_doc "y=cosdg(x) calculates the cosine of the angle x given in degrees."
#define cosm1_doc "y=calculates cos(x) - 1 for use when x is near zero."
#define cotdg_doc "y=cotdg(x) calculates the cotangent of the angle x given in degrees."
#define dawsn_doc "y=dawsn(x) returns dawson's integral: exp(-x**2) *\nintegral(exp(t**2),t=0..x)."
#define ellipe_doc "y=ellipe(m) returns the complete integral of the second kind:\nintegral(sqrt(1-m*sin(t)**2),t=0..pi/2)"
#define ellipeinc_doc "y=ellipeinc(phi,m) returns the incomplete elliptic integral of the\nsecond kind: integral(sqrt(1-m*sin(t)**2),t=0..phi)"
#define ellipj_doc "(sn,cn,dn,ph)=ellipj(u,m) calculates the Jacobian elliptic functions of\nparameter m between 0 and 1, and real u.  The returned functions are\noften written sn(u|m), cn(u|m), and dn(u|m).  The value of ph is such\nthat if u = ellik(ph,m), then sn(u|m) = sin(ph) and cn(u|m) = cos(ph)."
#define ellipkm1_doc "y=ellipkm1(1 - m) returns the complete integral of the first kind:\nintegral(1/sqrt(1-m*sin(t)**2),t=0..pi/2)"
#define ellipkinc_doc "y=ellipkinc(phi,m) returns the incomplete elliptic integral of the first\nkind: integral(1/sqrt(1-m*sin(t)**2),t=0..phi)"
#define erf_doc "y=erf(z) returns the error function of complex argument defined as\nas 2/sqrt(pi)*integral(exp(-t**2),t=0..z)"
#define erfc_doc "y=erfc(x) returns 1 - erf(x)."
#define exp1_doc "y=exp1(z) returns the exponential integral (n=1) of complex argument\nz: integral(exp(-z*t)/t,t=1..inf)."
#define exp10_doc "y=exp10(x) returns 10 raised to the x power."
#define exp2_doc "y=exp2(x) returns 2 raised to the x power."
#define expi_doc "y=expi(x) returns an exponential integral of argument x defined as\nintegral(exp(t)/t,t=-inf..x).  See expn for a different exponential\nintegral."
#define expm1_doc "y=expm1(x) calculates exp(x) - 1 for use when x is near zero."
#define expn_doc "y=expn(n,x) returns the exponential integral for integer n and\nnon-negative x and n: integral(exp(-x*t) / t**n, t=1..inf)."
#define fdtr_doc "y=fdtr(dfn,dfd,x) returns the area from zero to x under the F density\nfunction (also known as Snedcor's density or the variance ratio\ndensity).  This is the density of X = (unum/dfn)/(uden/dfd), where unum and\nuden are random variables having Chi square distributions with dfn and\ndfd degrees of freedom, respectively."
#define fdtrc_doc "y=fdtrc(dfn,dfd,x) returns the complemented F distribution function."
#define fdtri_doc "x=fdtri(dfn,dfd,p) finds the F density argument x such that \nfdtr(dfn,dfd,x)=p."
#define fdtridfd_doc "x=fdtridfd(dfn,p,x) finds the F density argument dfd such that \nfdtr(dfn,dfd,x)=p."
#define fdtridfn_doc "x=fdtridfn(p,dfd,x) finds the F density argument dfn such that \nfdtr(dfn,dfd,x)=p."
#define fresnel_doc "(ssa,cca)=fresnel(z) returns the fresnel sin and cos integrals: integral(sin(pi/2\n* t**2),t=0..z) and integral(cos(pi/2 * t**2),t=0..z) for real or \ncomplex z."
#define gamma_doc "y=gamma(z) returns the gamma function of the argument.  The gamma\nfunction is often referred to as the generalized factorial since \nz*gamma(z) = gamma(z+1) and gamma(n+1) = n! for natural number n."
#define gammainc_doc "y=gammainc(a,x) returns the incomplete gamma integral defined as\n1 / gamma(a) * integral(exp(-t) * t**(a-1), t=0..x).  Both arguments\nmust be positive."
#define gammaincc_doc "y=gammaincc(a,x) returns the complemented incomplete gamma integral\ndefined as 1 / gamma(a) * integral(exp(-t) * t**(a-1), t=x..inf) = 1 -\ngammainc(a,x).  Both arguments must be positive."
#define gammainccinv_doc "x=gammainccinv(a,y) returns x such that gammaincc(a,x) = y."
#define gammaln_doc "y=gammaln(z) returns the base e logarithm of the absolute value of the\ngamma function of z: ln(|gamma(z)|)"
#define gdtr_doc "y=gdtr(a,b,x) returns the integral from zero to x of the gamma\nprobability density function: a**b / gamma(b) * integral(t**(b-1) exp(-at),t=0..x).\nThe arguments a and b are used differently here than in other definitions."
#define gdtrc_doc "y=gdtrc(a,b,x) returns the integral from x to infinity of the gamma\nprobability density function.  SEE gdtr, gdtri"
#define gdtri_doc "x=gdtri(a,b,p) returns pth quantile of the gamma distribution.  It is \nthe inverse of the gamma cdf returning the value of x for which \ngdtr(b,a,x) = p."
#define hankel1_doc "y=hankel1(v,z) returns the Hankel function of the first kind for real order v and complex argument z."
#define hankel1e_doc "y=hankel1e(v,z) returns the exponentially scaled Hankel function of the first\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(-1j * z)"
#define hankel2_doc "y=hankel2(v,z) returns the Hankel function of the second kind for real order v and complex argument z."
#define hankel2e_doc "y=hankel2e(v,z) returns the exponentially scaled Hankel function of the second\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(1j * z)"
#define hyp1f1_doc "y=hyp1f1(a,b,x) returns the confluent hypergeometeric function\n( 1F1(a,b;x) ) evaluated at the values a, b, and x."
#define hyp1f2_doc "(y,err)=hyp1f2(a,b,c,x) returns (y,err) with the hypergeometric function 1F2 in y and an error estimate in err."
#define hyp2f0_doc "(y,err)=hyp2f0(a,b,x,type) returns (y,err) with the hypergeometric function 2F0 in y and an error estimate in err.  The input type determines a convergence factor and\ncan be either 1 or 2."
#define hyp2f1_doc "y=hyp2f1(a,b,c,z) returns the gauss hypergeometric function\n( 2F1(a,b;c;z) )."
#define hyp3f0_doc "(y,err)=hyp3f0(a,b,c,x) returns (y,err) with the hypergeometric function 3F0 in y and an error estimate in err."
#define hyperu_doc "y=hyperu(a,b,x) returns the confluent hypergeometric function of the\nsecond kind U(a,b,x)."
#define i0_doc "y=i0(x) returns the modified Bessel function of order 0 at x."
#define i0e_doc "y=i0e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i0e(x) = exp(-|x|) * i0(x)."
#define i1_doc "y=i1(x) returns the modified Bessel function of order 1 at x."
#define i1e_doc "y=i1e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i1e(x) = exp(-|x|) * i1(x)."
#define it2i0k0_doc "(ii0,ik0)=it2i0k0(x) returns the integrals int((i0(t)-1)/t,t=0..x) and \nint(k0(t)/t,t=x..infinitity)."
#define it2j0y0_doc "(ij0,iy0)=it2j0y0(x) returns the integrals int((1-j0(t))/t,t=0..x) and \nint(y0(t)/t,t=x..infinitity)."
#define it2struve0_doc "y=it2struve0(x) returns the integral of the Struve function of order 0 \ndivided by t from x to infinity:  integral(H0(t)/t, t=x..inf)."
#define itairy_doc "(Apt,Bpt,Ant,Bnt)=itairy(x) calculates the integral of Airy functions from 0 to x\nfor positive (Apt, Bpt) and negative (Ant, Bnt) arguments."
#define iti0k0_doc "(ii0,ik0)=iti0k0(x) returns simple integrals from 0 to x of the zeroth order \nmodified bessel functions i0 and k0."
#define itj0y0_doc "(ij0,iy0)=itj0y0(x) returns simple integrals from 0 to x of the zeroth order \nbessel functions j0 and y0."
#define itmodstruve0_doc "y=itmodstruve0(x) returns the integral of the modified Struve function\nof order 0 from 0 to x:  integral(L0(t), t=0..x)."
#define itstruve0_doc "y=itstruve0(x) returns the integral of the Struve function of order 0 \nfrom 0 to x:  integral(H0(t), t=0..x)."
#define iv_doc "y=iv(v,z) returns the modified Bessel function of real order v of\nz.  If z is of real type and negative, v must be integer valued."
#define ive_doc "y=ive(v,z) returns the exponentially scaled modified Bessel function of \nreal order v and complex z: ive(v,z) = iv(v,z) * exp(-abs(z.real))"
#define j0_doc "y=j0(x) returns the Bessel function of order 0 at x."
#define j1_doc "y=j1(x) returns the Bessel function of order 1 at x."
#define jn_doc "y=jn(n,x) returns the Bessel function of integer order n at  x."
#define jv_doc "y=jv(v,z) returns the Bessel function of real order v at complex z."
#define jve_doc "y=jve(v,z) returns the exponentially scaled Bessel function of real order\nv at complex z: jve(v,z) = jv(v,z) * exp(-abs(z.imag))"
#define k0_doc "y=k0(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 0 at x."
#define k0e_doc "y=k0e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 0 at x.  k0e(x) = exp(x) * k0(x)."
#define k1_doc "y=i1(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 1 at x."
#define k1e_doc "y=k1e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 1 at x.  k1e(x) = exp(x) * k1(x)"
#define kei_doc "y=kei(x) returns the Kelvin function ker x"
#define keip_doc "y=keip(x) returns the derivative of the Kelvin function kei x"
#define kelvin_doc "(Be, Ke, Bep, Kep)=kelvin(x) returns the tuple (Be, Ke, Bep, Kep) which containes \ncomplex numbers representing the real and imaginary Kelvin functions \nand their derivatives evaluated at x.  For example, \nkelvin(x)[0].real = ber x and kelvin(x)[0].imag = bei x with similar \nrelationships for ker and kei."
#define ker_doc "y=ker(x) returns the Kelvin function ker x"
#define kerp_doc "y=kerp(x) returns the derivative of the Kelvin function ker x"
#define kn_doc "y=kn(n,x) returns the modified Bessel function of the second kind (sometimes called the third kind) for\ninteger order n at x."
#define kolmogi_doc "y=kolmogi(p) returns y such that kolmogorov(y) = p"
#define kolmogorov_doc "p=kolmogorov(y) returns the complementary cumulative distribution \nfunction of Kolmogorov's limiting distribution (Kn* for large n) \nof a two-sided test for equality between an empirical and a theoretical \ndistribution. It is equal to the (limit as n->infinity of the) probability \nthat sqrt(n) * max absolute deviation > y."
#define kv_doc "y=kv(v,z) returns the modified Bessel function of the second kind (sometimes called the third kind) for\nreal order v at complex z."
#define kve_doc "y=kve(v,z) returns the exponentially scaled, modified Bessel function\nof the second kind (sometimes called the third kind) for real order v at complex z: kve(v,z) = kv(v,z) * exp(z)"
#define log1p_doc "y=log1p(x) calculates log(1+x) for use when x is near zero."
#define lpmv_doc "y=lpmv(m,v,x) returns the associated legendre function of integer order\nm and real degree v (s.t. v>-m-1 or v<m): |x|<=1."
#define mathieu_a_doc "lmbda=mathieu_a(m,q) returns the characteristic value for the even solution, \nce_m(z,q), of Mathieu's equation"
#define mathieu_b_doc "lmbda=mathieu_b(m,q) returns the characteristic value for the odd solution, \nse_m(z,q), of Mathieu's equation"
#define mathieu_cem_doc "(y,yp)=mathieu_cem(m,q,x) returns the even Mathieu function, ce_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of ce_m(x,q)"
#define mathieu_modcem1_doc "(y,yp)=mathieu_modcem1(m,q,x) evaluates the even modified Matheiu function \nof the first kind, Mc1m(x,q), and its derivative at x for order m and\nparameter q."
#define mathieu_modcem2_doc "(y,yp)=mathieu_modcem2(m,q,x) evaluates the even modified Matheiu function \nof the second kind, Mc2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
#define mathieu_modsem1_doc "(y,yp)=mathieu_modsem1(m,q,x) evaluates the odd modified Matheiu function \nof the first kind, Ms1m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
#define mathieu_modsem2_doc "(y,yp)=mathieu_modsem2(m,q,x) evaluates the odd modified Matheiu function\nof the second kind, Ms2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
#define mathieu_sem_doc "(y,yp)=mathieu_sem(m,q,x) returns the odd Mathieu function, se_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of se_m(x,q)."
#define modfresnelm_doc "(fm,km)=modfresnelp(x) returns the modified fresnel integrals F_-(x) amd K_-(x)\nas fp=integral(exp(-1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(1j*(x*x+pi/4))*fp"
#define modfresnelp_doc "(fp,kp)=modfresnelp(x) returns the modified fresnel integrals F_+(x) and K_+(x)\nas fp=integral(exp(1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(-1j*(x*x+pi/4))*fp"
#define modstruve_doc "y=modstruve(v,x) returns the modified Struve function Lv(x) of order\nv at x, x must be positive unless v is an integer and it is recommended\nthat |v|<=20."
#define nbdtr_doc "y=nbdtr(k,n,p) returns the sum of the terms 0 through k of the\nnegative binomial distribution: sum((n+j-1)Cj p**n (1-p)**j,j=0..k).\nIn a sequence of Bernoulli trials this is the probability that k or\nfewer failures precede the nth success."
#define nbdtrc_doc "y=nbdtrc(k,n,p) returns the sum of the terms k+1 to infinity of the\nnegative binomial distribution."
#define nbdtri_doc "p=nbdtri(k,n,y) finds the argument p such that nbdtr(k,n,p)=y."
#define nbdtrik_doc "k=nbdtrik(y,n,p) finds the argument k such that nbdtr(k,n,p)=y."
#define nbdtrin_doc "n=nbdtrin(k,y,p) finds the argument n such that nbdtr(k,n,p)=y."
#define ndtr_doc "y=ndtr(x) returns the area under the standard Gaussian probability \ndensity function, integrated from minus infinity to x:\n1/sqrt(2*pi) * integral(exp(-t**2 / 2),t=-inf..x)"
#define ndtri_doc "x=ndtri(y) returns the argument x for which the area udnder the\nGaussian probability density function (integrated from minus infinity\nto x) is equal to y."
#define obl_ang1_doc "(s,sp)=obl_ang1(m,n,c,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
#define obl_ang1_cv_doc "(s,sp)=obl_ang1_cv(m,n,c,cv,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
#define obl_cv_doc "cv=obl_cv(m,n,c) computes the characteristic value of oblate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
#define obl_rad1_doc "(s,sp)=obl_rad1(m,n,c,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
#define obl_rad1_cv_doc "(s,sp)=obl_rad1_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
#define obl_rad2_doc "(s,sp)=obl_rad2(m,n,c,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
#define obl_rad2_cv_doc "(s,sp)=obl_rad2_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
#define pbdv_doc "(d,dp)=pbdv(v,x) returns (d,dp) with the parabolic cylinder function Dv(x) in \nd and the derivative, Dv'(x) in dp."
#define pbvv_doc "(v,vp)=pbvv(v,x) returns (v,vp) with the parabolic cylinder function Vv(x) in \nv and the derivative, Vv'(x) in vp."
#define pbwa_doc "(w,wp)=pbwa(a,x) returns (w,wp) with the parabolic cylinder function W(a,x) in \nw and the derivative, W'(a,x) in wp.  May not be accurate for large (>5) \narguments in a and/or x."
#define pdtr_doc "y=pdtr(k,m) returns the sum of the first k terms of the Poisson\ndistribution: sum(exp(-m) * m**j / j!, j=0..k) = gammaincc( k+1, m).\nArguments must both be positive and k an integer."
#define pdtrc_doc "y=pdtrc(k,m) returns the sum of the terms from k+1 to infinity of the\nPoisson distribution: sum(exp(-m) * m**j / j!, j=k+1..inf) = gammainc( k+1, m).\nArguments must both be positive and k an integer."
#define pdtri_doc "m=pdtri(k,y) returns the Poisson variable m such that the sum\nfrom 0 to k of the Poisson density is equal to the given probability\ny:  calculated by gammaincinv( k+1, y).  k must be a nonnegative integer and\ny between 0 and 1."
#define pdtrik_doc "k=pdtrik(p,m) returns the quantile k such that pdtr(k,m)=p"
#define pro_ang1_doc "(s,sp)=pro_ang1(m,n,c,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
#define pro_ang1_cv_doc "(s,sp)=pro_ang1_cv(m,n,c,cv,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
#define pro_cv_doc "cv=pro_cv(m,n,c) computes the characteristic value of prolate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
#define pro_rad1_doc "(s,sp)=pro_rad1(m,n,c,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
#define pro_rad1_cv_doc "(s,sp)=pro_rad1_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
#define pro_rad2_doc "(s,sp)=pro_rad2(m,n,c,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
#define pro_rad2_cv_doc "(s,sp)=pro_rad2_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
#define psi_doc "y=psi(z) is the derivative of the logarithm of the gamma function\nevaluated at z (also called the digamma function)."
#define radian_doc "y=radian(d,m,s) returns the angle given in (d)egrees, (m)inutes, and\n(s)econds in radians."
#define rgamma_doc "y=rgamma(z) returns one divided by the gamma function of x."
#define round_doc "y=Returns the nearest integer to x as a double precision\nfloating point result.  If x ends in 0.5 exactly, the\nnearest even integer is chosen."
#define shichi_doc "(shi,chi)=shichi(x) returns the hyperbolic sine and cosine integrals:\nintegral(sinh(t)/t,t=0..x) and eul + ln x +\nintegral((cosh(t)-1)/t,t=0..x) where eul is Euler's Constant."
#define sici_doc "(si,ci)=sici(x) returns in si the integral of the sinc function from 0 to x:\nintegral(sin(t)/t,t=0..x).  It returns in ci the cosine integral: eul + ln x +\nintegral((cos(t) - 1)/t,t=0..x)."
#define sindg_doc "y=sindg(x) calculates the sine of the angle x given in degrees."
#define smirnov_doc "y=smirnov(n,e) returns the exact Kolmogorov-Smirnov complementary \ncumulative distribution function (Dn+ or Dn-) for a one-sided test of \nequality between an empirical and a theoretical distribution. It is equal \nto the probability that the maximum difference between a theoretical \ndistribution and an empirical one based on n samples is greater than e."
#define smirnovi_doc "e=smirnovi(n,y) returns e such that smirnov(n,e) = y."
#define spence_doc "y=spence(x) returns the dilogarithm integral: -integral(log t /\n(t-1),t=1..x)"
#define stdtr_doc "p=stdtr(df,t) returns the integral from minus infinity to t of the Student t\ndistribution with df > 0 degrees of freedom:\ngamma((df+1)/2)/(sqrt(df*pi)*gamma(df/2)) * integral((1+x**2/df)**(-df/2-1/2),\nx=-inf..t)"
#define stdtridf_doc "t=stdtridf(p,t) returns the argument df such that stdtr(df,t) is equal to p."
#define stdtrit_doc "t=stdtrit(df,p) returns the argument t such that stdtr(df,t) is equal to p."
#define struve_doc "y=struve(v,x) returns the Struve function Hv(x) of order v at x, x\nmust be positive unless v is an integer."
#define tandg_doc "y=tandg(x) calculates the tangent of the angle x given in degrees."
#define wofz_doc "y=wofz(z) returns the value of the fadeeva function for complex argument\nz: exp(-z**2)*erfc(-i*z)"
#define y0_doc "y=y0(x) returns the Bessel function of the second kind of order 0 at x."
#define y1_doc "y=y1(x) returns the Bessel function of the second kind of order 1 at x."
#define yn_doc "y=yn(n,x) returns the Bessel function of the second kind of integer\norder n at x."
#define yv_doc "y=yv(v,z) returns the Bessel function of the second kind of real\norder v at complex z."
#define yve_doc "y=yve(v,z) returns the exponentially scaled Bessel function of the second \nkind of real order v at complex z: yve(v,z) = yv(v,z) * exp(-abs(z.imag))"
#define zeta_doc "y=zeta(x,q) returns the Riemann zeta function of two arguments:\nsum((k+q)**(-x),k=0..inf)"
#define zetac_doc "y=zetac(x) returns 1.0 - the Riemann zeta function: sum(k**(-x), k=2..inf)"
#endif /* CEPHES_DOC_H */
